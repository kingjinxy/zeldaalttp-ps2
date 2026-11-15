	THUMB_FUNC_START sub_08012728
sub_08012728: @ 0x08012728
	add r2, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #21
	ldr r1, _08012760  @ =gEntityLinks
	add r0, r0, r1
	str r0, [r2, #4]
	ldr r1, [r0]
	str r1, [r2]
	str r2, [r0]
	str r2, [r1, #4]
	ldr r0, [r2, #72]
	cmp r0, #0
	bne _08012746
	ldr r0, _08012764  @ =gUnknown_0813E7D4
	str r0, [r2, #72]
_08012746:
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _08012768  @ =gUnknown_03005AD8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bx lr
_08012760:
	.4byte gEntityLinks
_08012764:
	.4byte gUnknown_0813E7D4
_08012768:
	.4byte gUnknown_03005AD8
	THUMB_FUNC_END sub_08012728

