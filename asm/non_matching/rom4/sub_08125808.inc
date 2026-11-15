	THUMB_FUNC_START sub_08125808
sub_08125808: @ 0x08125808
	push {r4,lr}
	lsl r0, r0, #16
	lsr r3, r0, #16
	ldr r1, _08125848  @ =gRam
	ldr r2, _0812584C  @ =0x00001B0C
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08125822
	sub r2, r2, #2
	add r0, r1, r2
	ldrh r0, [r0]
	lsr r0, r0, #13
_08125822:
	add r1, r0, #0
	mov r4, #128
_08125826:
	lsl r2, r3, #17
	lsr r3, r2, #16
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r0, r1, #0
	and r0, r0, r4
	cmp r0, #0
	beq _08125826
	lsr r3, r2, #24
	cmp r3, #0
	beq _08125850
	cmp r3, #7
	bls _08125852
	mov r3, #7
	b _08125852
	.byte 0x00
	.byte 0x00
_08125848:
	.4byte gRam
_0812584C:
	.4byte 0x00001B0C
_08125850:
	mov r3, #1
_08125852:
	lsl r0, r3, #24
	lsr r0, r0, #24
	bl sub_08125E80
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08125808

