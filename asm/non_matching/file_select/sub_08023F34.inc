	THUMB_FUNC_START sub_08023F34
sub_08023F34: @ 0x08023F34
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _08023F60
	ldr r1, _08023F5C  @ =gUnknown_0813C0C0
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r1, r4, #0
	add r1, r1, #127
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	b _08023F70
	.byte 0x00
	.byte 0x00
_08023F5C:
	.4byte gUnknown_0813C0C0
_08023F60:
	ldr r0, _08023F78  @ =gUnknown_0813C128
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
_08023F70:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08023F78:
	.4byte gUnknown_0813C128
	THUMB_FUNC_END sub_08023F34

