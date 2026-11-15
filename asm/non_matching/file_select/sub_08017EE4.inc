	THUMB_FUNC_START sub_08017EE4
sub_08017EE4: @ 0x08017EE4
	push {r4,lr}
	add r3, r0, #0
	add r4, r3, #0
	add r4, r4, #116
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _08017F50
	ldrb r0, [r3, #20]
	cmp r0, #2
	bne _08017F1C
	ldr r2, _08017F18  @ =gUnknown_03006A30
	ldrb r1, [r3, #11]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0, #2]
	cmp r0, #0
	beq _08017F1C
	mov r0, #4
	strh r0, [r4]
	b _08017F7A
_08017F18:
	.4byte gUnknown_03006A30
_08017F1C:
	mov r1, #0
	mov r0, #1
	strb r0, [r3, #20]
	strb r0, [r3, #23]
	strb r1, [r3, #26]
	add r1, r3, #0
	add r1, r1, #61
	mov r0, #252
	strb r0, [r1]
	add r1, r1, #9
	mov r0, #12
	strb r0, [r1]
	sub r1, r1, #7
	mov r0, #16
	strb r0, [r1]
	add r1, r1, #29
	ldr r0, _08017F4C  @ =0x000031FF
	strh r0, [r1]
	add r0, r3, #0
	mov r1, #0
	bl sub_08017D78
	mov r0, #0
	b _08017F7C
_08017F4C:
	.4byte 0x000031FF
_08017F50:
	cmp r0, #60
	bne _08017F58
	mov r0, #2
	strb r0, [r3, #26]
_08017F58:
	ldrh r2, [r4]
	cmp r2, #59
	bhi _08017F7A
	mov r0, #1
	and r0, r0, r2
	cmp r0, #0
	beq _08017F7A
	ldr r0, _08017F84  @ =gUnknown_081396E0
	mov r1, #6
	and r1, r1, r2
	lsr r1, r1, #1
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldrh r1, [r3, #50]
	add r0, r0, r1
	strh r0, [r3, #50]
_08017F7A:
	mov r0, #1
_08017F7C:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08017F84:
	.4byte gUnknown_081396E0
	THUMB_FUNC_END sub_08017EE4

