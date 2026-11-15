	THUMB_FUNC_START sub_0802103C
sub_0802103C: @ 0x0802103C
	push {r4,lr}
	add r4, r0, #0
	ldr r2, [r4, #88]
	cmp r2, #0
	beq _08021056
	ldr r0, _08021090  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	add r0, r0, r2
	add r0, r0, #120
	mov r1, #136
	strb r1, [r0]
_08021056:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08021098
	add r1, r4, #0
	add r1, r1, #112
	ldrh r0, [r1]
	sub r0, r0, #4
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #114
	ldrh r2, [r0]
	add r2, r2, #8
	strh r2, [r0]
	ldr r0, _08021094  @ =gUnknown_03000488
	ldrh r1, [r1]
	strh r1, [r0]
	strh r2, [r0, #2]
	mov r1, #0
	strh r1, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	add r0, r4, #0
	bl 0x08003828
	b _080210EA
_08021090:
	.4byte gUnknown_03000E20
_08021094:
	.4byte gUnknown_03000488
_08021098:
	ldr r1, [r4, #88]
	cmp r1, #0
	beq _080210DE
	ldr r0, [r4, #84]
	str r1, [r0, #84]
	ldr r1, [r4, #88]
	mov r0, #1
	strb r0, [r1, #11]
	ldr r1, [r4, #88]
	ldr r0, [r4, #84]
	ldrh r0, [r0, #50]
	strh r0, [r1, #50]
	ldr r1, [r4, #88]
	ldr r0, [r4, #84]
	ldrh r0, [r0, #54]
	strh r0, [r1, #54]
	ldr r0, [r4, #88]
	bl sub_08021350
	ldr r0, [r4, #88]
	ldr r1, [r0, #88]
	cmp r1, #0
	beq _080210DE
	ldr r0, [r4, #84]
	ldrh r0, [r0, #50]
	strh r0, [r1, #50]
	ldr r0, [r4, #88]
	ldr r1, [r0, #88]
	ldr r0, [r4, #84]
	ldrh r0, [r0, #54]
	strh r0, [r1, #54]
	ldr r0, [r4, #88]
	ldr r0, [r0, #88]
	bl sub_08021350
_080210DE:
	add r0, r4, #0
	bl 0x08003BCC
	add r0, r4, #0
	bl DeleteThisEntity
_080210EA:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802103C

