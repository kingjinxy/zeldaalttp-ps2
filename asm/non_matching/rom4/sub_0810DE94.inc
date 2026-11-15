	THUMB_FUNC_START sub_0810DE94
sub_0810DE94: @ 0x0810DE94
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E2614
	ldr r5, _0810DF40  @ =gRam
	ldr r1, _0810DF44  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	cmp r1, #0
	bne _0810DF16
	ldr r2, _0810DF48  @ =0x000010A2
	add r0, r5, r2
	add r0, r0, r4
	mov r8, r0
	strb r1, [r0]
	bl GetRandomInt
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810DF4C  @ =0x00000FB2
	add r1, r5, r2
	add r7, r4, r1
	mov r1, #3
	and r1, r1, r0
	strb r1, [r7]
	ldr r1, _0810DF50  @ =0x00000F52
	add r2, r5, r1
	add r2, r4, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	mov r1, #127
	and r1, r1, r0
	add r1, r1, #64
	strb r1, [r6]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _0810DF54  @ =0x0000097C
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _0810DF0E
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #24
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _0810DF16
_0810DF0E:
	mov r0, #4
	mov r2, r8
	strb r0, [r2]
	strb r1, [r7]
_0810DF16:
	ldr r1, _0810DF40  @ =gRam
	ldr r2, _0810DF58  @ =0x00000F62
	add r0, r1, r2
	add r3, r4, r0
	ldr r5, _0810DF5C  @ =gUnknown_0817CF4A
	add r2, r2, #80
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r2, r0, #1
	ldr r0, _0810DF60  @ =0x00000996
	add r1, r1, r0
	ldrb r1, [r1]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0810DF64
	mov r0, #1
	orr r0, r0, r2
	b _0810DF66
	.byte 0x00
	.byte 0x00
_0810DF40:
	.4byte gRam
_0810DF44:
	.4byte 0x00000FC2
_0810DF48:
	.4byte 0x000010A2
_0810DF4C:
	.4byte 0x00000FB2
_0810DF50:
	.4byte 0x00000F52
_0810DF54:
	.4byte 0x0000097C
_0810DF58:
	.4byte 0x00000F62
_0810DF5C:
	.4byte gUnknown_0817CF4A
_0810DF60:
	.4byte 0x00000996
_0810DF64:
	add r0, r2, #0
_0810DF66:
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r3]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810DE94

	.byte 0x00
	.byte 0x00
