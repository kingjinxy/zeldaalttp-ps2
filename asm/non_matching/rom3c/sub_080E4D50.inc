	THUMB_FUNC_START sub_080E4D50
sub_080E4D50: @ 0x080E4D50
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080E4DCC  @ =gRam
	ldr r0, _080E4DD0  @ =0x00000FB2
	add r4, r6, r0
	add r4, r5, r4
	ldr r1, _080E4DD4  @ =0x00001082
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r3, [r4]
	cmp r0, r3
	bne _080E4DA8
	ldr r1, _080E4DD8  @ =0x0000097C
	add r0, r6, r1
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _080E4D98
	add r1, r1, #1
	add r0, r6, r1
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _080E4DA8
_080E4D98:
	add r0, r3, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _080E4DDC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #128
	strb r1, [r0]
_080E4DA8:
	ldr r2, _080E4DCC  @ =gRam
	ldr r0, _080E4DE0  @ =0x00000F22
	add r1, r2, r0
	add r1, r5, r1
	ldr r0, _080E4DE4  @ =gUnknown_081773F4
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E4DE8  @ =0x00000F12
	add r2, r2, r1
	add r2, r5, r2
	ldr r0, _080E4DEC  @ =gUnknown_081773FC
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
_080E4DCC:
	.4byte gRam
_080E4DD0:
	.4byte 0x00000FB2
_080E4DD4:
	.4byte 0x00001082
_080E4DD8:
	.4byte 0x0000097C
_080E4DDC:
	.4byte 0x00000FC2
_080E4DE0:
	.4byte 0x00000F22
_080E4DE4:
	.4byte gUnknown_081773F4
_080E4DE8:
	.4byte 0x00000F12
_080E4DEC:
	.4byte gUnknown_081773FC
	THUMB_FUNC_END sub_080E4D50

