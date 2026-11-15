	THUMB_FUNC_START sub_080179C4
sub_080179C4: @ 0x080179C4
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _080179F8  @ =gUnknown_081396A4
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	add r2, r4, #0
	add r2, r2, #118
	ldrh r0, [r2]
	cmp r0, #0
	beq _08017A2A
	sub r1, r0, #1
	strh r1, [r2]
	lsl r0, r1, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _080179FC
	add r0, r4, #0
	bl sub_08017D50
	b _08017A2A
	.byte 0x00
	.byte 0x00
_080179F8:
	.4byte gUnknown_081396A4
_080179FC:
	cmp r0, #59
	bhi _08017A2A
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08017A2A
	ldrb r1, [r4, #30]
	lsl r0, r1, #28
	lsr r0, r0, #28
	lsr r2, r1, #4
	cmp r0, r2
	bne _08017A20
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	mov r1, #14
	orr r0, r0, r1
	b _08017A28
_08017A20:
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
_08017A28:
	strb r0, [r4, #30]
_08017A2A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080179C4

