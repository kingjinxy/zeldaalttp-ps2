	THUMB_FUNC_START sub_080FCF08
sub_080FCF08: @ 0x080FCF08
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r3, r0, #0
	ldr r1, _080FCF40  @ =gRam
	ldr r2, _080FCF44  @ =0x00000F82
	add r0, r1, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080FCF50
	mov r2, #0
	ldr r4, _080FCF48  @ =0x000009DA
	add r0, r1, r4
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FCF2C
	mov r2, #1
_080FCF2C:
	cmp r2, #0
	beq _080FCF3C
	ldr r2, _080FCF4C  @ =0x00001022
	add r0, r1, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #11
	bhi _080FCF50
_080FCF3C:
	mov r0, #1
	b _080FCF52
_080FCF40:
	.4byte gRam
_080FCF44:
	.4byte 0x00000F82
_080FCF48:
	.4byte 0x000009DA
_080FCF4C:
	.4byte 0x00001022
_080FCF50:
	mov r0, #0
_080FCF52:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080FCF08

