	THUMB_FUNC_START sub_080131C8
sub_080131C8: @ 0x080131C8
	push {r4,lr}
	ldr r1, _080131D8  @ =gUnknown_03006C80
	ldrb r0, [r1, #1]
	cmp r0, #2
	bne _080131DC
	ldrb r0, [r1, #3]
	add r0, r0, #3
	b _080131E0
_080131D8:
	.4byte gUnknown_03006C80
_080131DC:
	ldrb r0, [r1, #6]
	sub r0, r0, #1
_080131E0:
	lsl r0, r0, #3
	ldr r1, _080131F8  @ =gUnknown_0842AD28
	add r4, r0, r1
	bl sub_0800099C
	mov r1, #7
	and r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	pop {r4}
	pop {r1}
	bx r1
_080131F8:
	.4byte gUnknown_0842AD28
	THUMB_FUNC_END sub_080131C8

