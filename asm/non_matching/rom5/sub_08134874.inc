	THUMB_FUNC_START sub_08134874
sub_08134874: @ 0x08134874
	push {r4,r5,lr}
	ldr r0, _08134898  @ =0x00000020
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	beq _08134892
	ldr r5, _0813489C  @ =gUnknown_083C3A3C
	add r4, r0, #0
_08134884:
	ldr r0, [r5]
	bl sub_08134648
	add r5, r5, #12
	sub r4, r4, #1
	cmp r4, #0
	bne _08134884
_08134892:
	pop {r4,r5}
	pop {r0}
	bx r0
_08134898:
	.4byte 0x00000020
_0813489C:
	.4byte gUnknown_083C3A3C
	THUMB_FUNC_END sub_08134874

