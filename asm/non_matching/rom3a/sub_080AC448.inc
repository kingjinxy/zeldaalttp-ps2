	THUMB_FUNC_START sub_080AC448
sub_080AC448: @ 0x080AC448
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	ldr r4, [sp, #32]
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r3, r3, #16
	lsr r7, r3, #16
	mov r9, r7
	lsl r4, r4, #16
	lsr r6, r4, #16
	mov r8, r6
	ldr r4, _080AC4DC  @ =gRam
	ldr r3, _080AC4E0  @ =0x00001732
	add r5, r4, r3
	strb r2, [r5]
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080AC520
	mov r1, sp
	ldr r3, _080AC4E4  @ =0x00000E1F
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r5]
	strb r1, [r0]
	mov r1, sp
	add r3, r3, #10
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r2, _080AC4E8  @ =0x00000E33
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	ldr r3, _080AC4EC  @ =0x000016D5
	add r0, r4, r3
	ldrb r2, [r0]
	mov r1, sp
	ldr r3, _080AC4F0  @ =0x00000E3D
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	lsr r2, r2, #1
	strb r2, [r0]
	ldrb r0, [r5]
	cmp r0, #0
	bne _080AC4F8
	add r1, r6, #0
	add r1, r1, #20
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _080AC4F4  @ =0x00000964
	add r0, r4, r3
	strh r7, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
	b _080AC520
_080AC4DC:
	.4byte gRam
_080AC4E0:
	.4byte 0x00001732
_080AC4E4:
	.4byte 0x00000E1F
_080AC4E8:
	.4byte 0x00000E33
_080AC4EC:
	.4byte 0x000016D5
_080AC4F0:
	.4byte 0x00000E3D
_080AC4F4:
	.4byte 0x00000964
_080AC4F8:
	ldr r0, _080AC530  @ =gUnknown_0816E150
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r0, [r0]
	add r0, r0, r8
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
	ldr r0, _080AC534  @ =gUnknown_0816E158
	add r2, r2, r0
	ldrh r0, [r2]
	add r0, r0, r9
	ldr r2, _080AC538  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AC520:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AC530:
	.4byte gUnknown_0816E150
_080AC534:
	.4byte gUnknown_0816E158
_080AC538:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AC448

