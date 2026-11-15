	THUMB_FUNC_START sub_0803435C
sub_0803435C: @ 0x0803435C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	mov r3, #0
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	mov r0, #64
	orr r1, r1, r0
	strb r1, [r4, #29]
	ldrb r1, [r4, #11]
	add r1, r1, #13
	mov r0, #15
	and r1, r1, r0
	ldrb r2, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldr r1, _080343E0  @ =gUnknown_08427AC0
	ldrb r0, [r4, #11]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #50]
	strh r3, [r4, #54]
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #32
	str r0, [r4, #12]
	ldrb r1, [r4, #11]
	lsl r1, r1, #2
	ldr r0, _080343E4  @ =gUnknown_08427AC6
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #120
	bl sub_0803D7E8
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
_080343E0:
	.4byte gUnknown_08427AC0
_080343E4:
	.4byte gUnknown_08427AC6
	THUMB_FUNC_END sub_0803435C

