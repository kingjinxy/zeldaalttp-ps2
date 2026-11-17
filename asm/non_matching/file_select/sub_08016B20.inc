	THUMB_FUNC_START sub_08016B20
sub_08016B20: @ 0x08016B20
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	ldrb r1, [r4, #28]
	sub r0, r0, #51
	and r0, r0, r1
	mov r1, #16
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldr r0, _08016B80  @ =gUnknown_0813927C
	str r0, [r4, #72]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	bl sub_0800099C
	mov r1, #56
	and r0, r0, r1
	add r0, r0, #20
	strb r0, [r4, #23]
	bl sub_08044594
	add r1, r0, #0
	str r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08016B80:
	.4byte gUnknown_0813927C
	THUMB_FUNC_END sub_08016B20

