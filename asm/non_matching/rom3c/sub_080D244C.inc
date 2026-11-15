	THUMB_FUNC_START sub_080D244C
sub_080D244C: @ 0x080D244C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r8, r5
	ldr r6, _080D24B0  @ =gRam
	ldr r1, _080D24B4  @ =0x00000FC2
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _080D24E0
	ldr r3, _080D24B8  @ =0x00000F62
	add r0, r6, r3
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #2
	bls _080D247A
	add r0, r5, #0
	mov r1, #76
	bl sub_080CF0AC
_080D247A:
	ldrb r2, [r4]
	add r0, r2, #1
	strb r0, [r4]
	ldr r0, _080D24BC  @ =gUnknown_08174C44
	add r0, r2, r0
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080D24D0
	ldr r0, _080D24C0  @ =0x00000A3C
	add r1, r6, r0
	mov r2, #0
	ldr r0, _080D24C4  @ =0x0000FFF3
	strh r0, [r1]
	ldr r3, _080D24C8  @ =0x00000F52
	add r1, r6, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D24CC  @ =0x00001770
	add r0, r6, r1
	strb r2, [r0]
	b _080D24E0
	.byte 0x00
	.byte 0x00
_080D24B0:
	.4byte gRam
_080D24B4:
	.4byte 0x00000FC2
_080D24B8:
	.4byte 0x00000F62
_080D24BC:
	.4byte gUnknown_08174C44
_080D24C0:
	.4byte 0x00000A3C
_080D24C4:
	.4byte 0x0000FFF3
_080D24C8:
	.4byte 0x00000F52
_080D24CC:
	.4byte 0x00001770
_080D24D0:
	ldr r3, _080D24EC  @ =0x00000F92
	add r0, r6, r3
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _080D24F0  @ =gUnknown_08174C58
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r7]
_080D24E0:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D24EC:
	.4byte 0x00000F92
_080D24F0:
	.4byte gUnknown_08174C58
	THUMB_FUNC_END sub_080D244C

