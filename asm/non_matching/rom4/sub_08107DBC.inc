	THUMB_FUNC_START sub_08107DBC
sub_08107DBC: @ 0x08107DBC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _08107E78  @ =gRam
	ldr r1, _08107E7C  @ =0x00000F62
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r5, _08107E80  @ =0x00000968
	add r2, r4, r5
	strb r0, [r2]
	ldr r6, _08107E84  @ =0x00000F72
	add r0, r4, r6
	add r0, r3, r0
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r4, r5
	strb r1, [r0]
	add r6, r6, #16
	add r0, r4, r6
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r1, _08107E88  @ =0x0000096C
	add r5, r4, r1
	strb r0, [r5]
	ldr r6, _08107E8C  @ =0x000010A2
	add r0, r4, r6
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r6, _08107E90  @ =0x0000096D
	add r0, r4, r6
	strb r1, [r0]
	ldr r0, _08107E94  @ =0x000016C4
	add r1, r4, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #40
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #79
	bhi _08107E72
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r5]
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #63
	bhi _08107E72
	ldr r2, _08107E98  @ =0x000017AA
	add r0, r4, r2
	ldr r5, _08107E9C  @ =0x0000180D
	add r1, r4, r5
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _08107E72
	ldr r6, _08107EA0  @ =0x00001702
	add r1, r4, r6
	mov r0, #1
	strb r0, [r1]
	ldr r0, _08107EA4  @ =0x00001805
	add r1, r4, r0
	mov r0, #8
	strb r0, [r1]
	ldr r2, _08107EA8  @ =0x000016F8
	add r1, r4, r2
	mov r0, #16
	strb r0, [r1]
	add r0, r3, #0
	mov r1, #32
	bl sub_080C2CB4
	mov r5, #150
	lsl r5, r5, #4
	add r0, r4, r5
	ldrb r1, [r0]
	sub r6, r6, #53
	add r0, r4, r6
	strb r1, [r0]
	ldr r1, _08107EAC  @ =0x00000961
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _08107EB0  @ =0x000016CE
	add r0, r4, r2
	strb r1, [r0]
_08107E72:
	pop {r4-r6}
	pop {r0}
	bx r0
_08107E78:
	.4byte gRam
_08107E7C:
	.4byte 0x00000F62
_08107E80:
	.4byte 0x00000968
_08107E84:
	.4byte 0x00000F72
_08107E88:
	.4byte 0x0000096C
_08107E8C:
	.4byte 0x000010A2
_08107E90:
	.4byte 0x0000096D
_08107E94:
	.4byte 0x000016C4
_08107E98:
	.4byte 0x000017AA
_08107E9C:
	.4byte 0x0000180D
_08107EA0:
	.4byte 0x00001702
_08107EA4:
	.4byte 0x00001805
_08107EA8:
	.4byte 0x000016F8
_08107EAC:
	.4byte 0x00000961
_08107EB0:
	.4byte 0x000016CE
	THUMB_FUNC_END sub_08107DBC

