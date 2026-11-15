	THUMB_FUNC_START sub_08025874
sub_08025874: @ 0x08025874
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080258AC
	ldrb r0, [r4, #10]
	cmp r0, #3
	bne _080258A4
	cmp r1, #128
	beq _080258A4
	mov r0, #15
	mov r1, #13
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _080258A4
	add r0, r4, #0
	bl sub_0803D3D0
_080258A4:
	add r0, r4, #0
	bl DeleteThisEntity
	b _080258D6
_080258AC:
	ldr r0, [r4, #84]
	cmp r0, #0
	beq _080258BA
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _080258D0
_080258BA:
	ldr r0, _080258CC  @ =gUnknown_0813C45C
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	b _080258D6
_080258CC:
	.4byte gUnknown_0813C45C
_080258D0:
	add r0, r4, #0
	bl DeleteThisEntity
_080258D6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025874

