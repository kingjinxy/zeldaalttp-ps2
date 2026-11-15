	THUMB_FUNC_START sub_08017FB4
sub_08017FB4: @ 0x08017FB4
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #11]
	cmp r0, #0
	bne _08018004
	add r0, r5, #0
	bl 0x080095A4
	add r0, r5, #0
	bl 0x08009874
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08017FE8
	ldrb r0, [r5, #20]
	cmp r0, #4
	bne _08017FDE
	add r0, r5, #0
	bl sub_08018528
_08017FDE:
	add r0, r5, #0
	add r1, r4, #0
	bl 0x0800996C
	b _0801800A
_08017FE8:
	ldr r4, _08018000  @ =gUnknown_08139758
	add r0, r5, #0
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _0801800A
_08018000:
	.4byte gUnknown_08139758
_08018004:
	add r0, r5, #0
	bl sub_080181A0
_0801800A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017FB4

