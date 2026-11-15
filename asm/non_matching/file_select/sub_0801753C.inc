	THUMB_FUNC_START sub_0801753C
sub_0801753C: @ 0x0801753C
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r0, _08017564  @ =gUnknown_03000208
	ldrh r0, [r0, #2]
	cmp r0, #1
	bls _0801754E
	add r0, r5, #0
	bl 0x080095A4
_0801754E:
	add r0, r5, #0
	bl 0x08009874
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _08017568
	add r0, r5, #0
	bl 0x0800996C
	b _0801757E
_08017564:
	.4byte gUnknown_03000208
_08017568:
	ldr r4, _08017584  @ =gUnknown_0813952C
	add r0, r5, #0
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_0801757E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08017584:
	.4byte gUnknown_0813952C
	THUMB_FUNC_END sub_0801753C

