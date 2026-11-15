	THUMB_FUNC_START sub_08101808
sub_08101808: @ 0x08101808
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_08101B7C
	ldr r5, _08101888  @ =gRam
	ldr r1, _0810188C  @ =0x00000FA2
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #9
	beq _0810184E
	ldr r7, _08101890  @ =0x00000F52
	add r0, r5, r7
	add r0, r4, r0
	mov r2, #0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _08101894  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #31
	strb r1, [r0]
	ldr r7, _08101898  @ =0x00001172
	add r0, r5, r7
	add r0, r4, r0
	strb r1, [r0]
	mov r0, #9
	strb r0, [r3]
	ldr r1, _0810189C  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
_0810184E:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08101882
	ldr r7, _08101890  @ =0x00000F52
	add r0, r5, r7
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #3
	beq _08101872
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08101882
_08101872:
	ldr r0, _081018A0  @ =gUnknown_0817B31C
	ldrb r1, [r5]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r6, #0
	bl _call_via_r1
_08101882:
	pop {r4-r7}
	pop {r0}
	bx r0
_08101888:
	.4byte gRam
_0810188C:
	.4byte 0x00000FA2
_08101890:
	.4byte 0x00000F52
_08101894:
	.4byte 0x00000FC2
_08101898:
	.4byte 0x00001172
_0810189C:
	.4byte 0x000010C2
_081018A0:
	.4byte gUnknown_0817B31C
	THUMB_FUNC_END sub_08101808

