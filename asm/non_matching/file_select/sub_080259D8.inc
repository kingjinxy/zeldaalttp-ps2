	THUMB_FUNC_START sub_080259D8
sub_080259D8: @ 0x080259D8
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x08009FB8
	add r0, r4, #0
	bl 0x08008E50
	ldrb r0, [r4, #10]
	cmp r0, #3
	beq _08025A18
	ldr r1, _08025A14  @ =gUnknown_084276C0
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldrh r0, [r4, #44]
	and r0, r0, r1
	cmp r0, #0
	beq _08025A3A
	add r0, r4, #0
	bl DeleteThisEntity
	b _08025A3A
	.byte 0x00
	.byte 0x00
_08025A14:
	.4byte gUnknown_084276C0
_08025A18:
	ldrh r0, [r4, #44]
	cmp r0, #0
	beq _08025A3A
	mov r0, #15
	mov r1, #13
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08025A34
	add r0, r4, #0
	bl sub_0803D3D0
_08025A34:
	add r0, r4, #0
	bl DeleteThisEntity
_08025A3A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080259D8

