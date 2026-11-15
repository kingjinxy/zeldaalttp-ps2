	THUMB_FUNC_START sub_080B2C34
sub_080B2C34: @ 0x080B2C34
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r1, _080B2D28  @ =gRam
	ldr r2, _080B2D2C  @ =0x00000BB3
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B2C4E
	b _080B2D78
_080B2C4E:
	ldr r3, _080B2D30  @ =0x00001A4E
	add r0, r1, r3
	ldrh r2, [r0]
	lsr r2, r2, #4
	ldr r4, _080B2D34  @ =0x00001A4C
	add r0, r1, r4
	ldrh r1, [r0]
	lsr r1, r1, #4
	ldr r0, _080B2D38  @ =gUnknown_03002B80
	ldrh r3, [r0]
	mov r0, sp
	strh r3, [r0]
	add r2, r2, #248
	mov r9, r2
	add r4, r3, #0
	sub r0, r2, r4
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldr r0, _080B2D3C  @ =gUnknown_03002B86
	ldrh r2, [r0]
	mov r0, sp
	strh r2, [r0, #4]
	add r1, r1, #128
	add r3, r2, #0
	sub r1, r1, r3
	lsl r1, r1, #16
	lsr r0, r1, #16
	cmp r0, #159
	bhi _080B2D24
	asr r0, r1, #16
	bl __floatsisf
	add r6, r0, #0
	ldr r1, _080B2D40  @ =0x3B4CCCCD
	bl __mulsf3
	ldr r1, _080B2D44  @ =0x3F800000
	bl __addsf3
	add r7, r0, #0
	ldr r1, _080B2D48  @ =0x3F2B851F
	bl __mulsf3
	mov r8, r0
	lsl r0, r4, #16
	asr r0, r0, #16
	bl __floatsisf
	add r4, r0, #0
	add r0, r7, #0
	add r1, r4, #0
	bl __mulsf3
	add r1, r4, #0
	bl __subsf3
	add r5, r0, #0
	ldr r4, _080B2D4C  @ =0x42F00000
	add r0, r7, #0
	add r1, r4, #0
	bl __mulsf3
	add r1, r4, #0
	bl __subsf3
	add r1, r0, #0
	add r0, r5, #0
	bl __subsf3
	bl __fixsfsi
	add r0, r0, r9
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	mov r0, r8
	add r1, r6, #0
	bl __mulsf3
	bl __fixsfsi
	mov r4, sp
	ldrh r4, [r4, #4]
	add r0, r4, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r10, r0
	mov r1, r9
	lsl r0, r1, #16
	asr r0, r0, #16
	ldr r2, _080B2D38  @ =gUnknown_03002B80
	mov r3, #0
	ldrsh r1, [r2, r3]
	sub r0, r0, r1
	add r0, r0, #10
	cmp r0, #249
	bhi _080B2D24
	mov r4, r10
	lsl r0, r4, #16
	asr r0, r0, #16
	ldr r2, _080B2D3C  @ =gUnknown_03002B86
	mov r3, #0
	ldrsh r1, [r2, r3]
	sub r0, r0, r1
	add r0, r0, #10
	cmp r0, #169
	bls _080B2D50
_080B2D24:
	mov r0, #0
	b _080B2E26
_080B2D28:
	.4byte gRam
_080B2D2C:
	.4byte 0x00000BB3
_080B2D30:
	.4byte 0x00001A4E
_080B2D34:
	.4byte 0x00001A4C
_080B2D38:
	.4byte gUnknown_03002B80
_080B2D3C:
	.4byte gUnknown_03002B86
_080B2D40:
	.4byte 0x3B4CCCCD
_080B2D44:
	.4byte 0x3F800000
_080B2D48:
	.4byte 0x3F2B851F
_080B2D4C:
	.4byte 0x42F00000
_080B2D50:
	mov r0, r9
	mov r4, sp
	ldrh r4, [r4]
	sub r1, r0, r4
	ldr r2, _080B2D70  @ =gRam
	ldr r3, _080B2D74  @ =0x0000097C
	add r0, r2, r3
	strb r1, [r0]
	mov r0, r10
	mov r4, sp
	ldrh r4, [r4, #4]
	sub r1, r0, r4
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	b _080B2E24
_080B2D70:
	.4byte gRam
_080B2D74:
	.4byte 0x0000097C
_080B2D78:
	ldr r4, _080B2E38  @ =gRam
	ldr r1, _080B2E3C  @ =0x00001A4E
	add r0, r4, r1
	ldrh r0, [r0]
	lsr r0, r0, #4
	mov r9, r0
	ldr r2, _080B2E40  @ =0x00001A4C
	add r0, r4, r2
	ldrh r0, [r0]
	lsr r0, r0, #4
	bl __floatsisf
	ldr r1, _080B2E44  @ =0x3F0C49BA
	bl __mulsf3
	bl __fixsfsi
	add r4, r0, #0
	lsl r4, r4, #16
	lsr r3, r4, #16
	mov r10, r3
	asr r4, r4, #16
	add r0, r4, #0
	sub r0, r0, #152
	bl __floatsisf
	ldr r6, _080B2E48  @ =0x3AF5C28F
	add r1, r6, #0
	bl __mulsf3
	ldr r5, _080B2E4C  @ =0x3F570A3D
	add r1, r5, #0
	bl __addsf3
	add r7, r0, #0
	add r0, r4, #0
	bl __floatsisf
	add r1, r6, #0
	bl __mulsf3
	add r1, r5, #0
	bl __addsf3
	mov r8, r0
	mov r4, r9
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl __floatsisf
	add r1, r7, #0
	bl __mulsf3
	add r5, r0, #0
	ldr r4, _080B2E50  @ =0x42F00000
	add r0, r7, #0
	add r1, r4, #0
	bl __mulsf3
	add r1, r4, #0
	bl __subsf3
	add r1, r0, #0
	add r0, r5, #0
	bl __subsf3
	bl __fixunssfsi
	ldr r2, _080B2E38  @ =gRam
	ldr r3, _080B2E54  @ =0x0000097C
	add r1, r2, r3
	strb r0, [r1]
	mov r4, r10
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl __floatsisf
	mov r1, r8
	bl __mulsf3
	bl __fixunssfsi
	ldr r2, _080B2E38  @ =gRam
	ldr r3, _080B2E58  @ =0x0000097D
	add r1, r2, r3
	strb r0, [r1]
_080B2E24:
	mov r0, #1
_080B2E26:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080B2E38:
	.4byte gRam
_080B2E3C:
	.4byte 0x00001A4E
_080B2E40:
	.4byte 0x00001A4C
_080B2E44:
	.4byte 0x3F0C49BA
_080B2E48:
	.4byte 0x3AF5C28F
_080B2E4C:
	.4byte 0x3F570A3D
_080B2E50:
	.4byte 0x42F00000
_080B2E54:
	.4byte 0x0000097C
_080B2E58:
	.4byte 0x0000097D
	THUMB_FUNC_END sub_080B2C34

