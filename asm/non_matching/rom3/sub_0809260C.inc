	THUMB_FUNC_START sub_0809260C
sub_0809260C: @ 0x0809260C
	push {r4,lr}
	add r2, r0, #0
	add r3, r1, #0
	ldr r0, _08092648  @ =0x00003714
	cmp r2, r0
	beq _08092642
	add r0, r0, #16
	cmp r2, r0
	beq _08092642
	ldr r1, _0809264C  @ =gRam
	ldr r0, _08092650  @ =0x00000B54
	add r1, r1, r0
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r4, _08092654  @ =gUnknown_02002A80
	add r0, r0, r4
	strh r2, [r0]
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r2, _08092658  @ =gUnknown_02002880
	add r0, r0, r2
	strh r3, [r0]
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
_08092642:
	pop {r4}
	pop {r0}
	bx r0
_08092648:
	.4byte 0x00003714
_0809264C:
	.4byte gRam
_08092650:
	.4byte 0x00000B54
_08092654:
	.4byte gUnknown_02002A80
_08092658:
	.4byte gUnknown_02002880
	THUMB_FUNC_END sub_0809260C

