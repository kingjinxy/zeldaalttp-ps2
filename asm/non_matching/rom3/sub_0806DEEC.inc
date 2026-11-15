	THUMB_FUNC_START sub_0806DEEC
sub_0806DEEC: @ 0x0806DEEC
	push {lr}
	ldr r1, _0806DF38  @ =gRam
	ldr r0, _0806DF3C  @ =0x00000B0C
	add r2, r1, r0
	ldrh r0, [r2]
	cmp r0, #0
	beq _0806DF1E
	sub r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #20
	bne _0806DF0E
	ldr r2, _0806DF40  @ =0x00001712
	add r1, r1, r2
	mov r0, #2
	strb r0, [r1]
_0806DF0E:
	bl sub_080975B4
	bl sub_0809B2AC
	bl sub_0806C988
	bl sub_08096F30
_0806DF1E:
	ldr r1, _0806DF44  @ =gUnknown_0814CC64
	ldr r0, _0806DF38  @ =gRam
	ldr r2, _0806DF48  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806DF38:
	.4byte gRam
_0806DF3C:
	.4byte 0x00000B0C
_0806DF40:
	.4byte 0x00001712
_0806DF44:
	.4byte gUnknown_0814CC64
_0806DF48:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806DEEC

