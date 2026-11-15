	THUMB_FUNC_START sub_080E7B2C
sub_080E7B2C: @ 0x080E7B2C
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _080E7BB8  @ =gUnknown_03003E74
	ldrh r4, [r2]
	lsl r4, r4, #3
	ldr r6, _080E7BBC  @ =gUnknown_03002780
	add r4, r4, r6
	ldr r2, _080E7BC0  @ =gUnknown_081778B4
	add r1, r1, r2
	ldrb r3, [r1]
	ldr r1, _080E7BC4  @ =gUnknown_081778C0
	mov r9, r1
	ldr r2, _080E7BC8  @ =0x00000A32
	add r2, r2, r6
	mov r8, r2
	add r8, r8, r0
	mov r2, r8
	ldrb r1, [r2]
	add r1, r1, r9
	ldrb r2, [r1]
	mov r1, #1
	and r1, r1, r2
	lsl r1, r1, #8
	orr r3, r3, r1
	ldrh r2, [r4, #4]
	ldr r1, _080E7BCC  @ =0xFFFFFC00
	and r1, r1, r2
	orr r1, r1, r3
	strh r1, [r4, #4]
	mov r2, r8
	ldrb r1, [r2]
	add r1, r1, r9
	ldrb r2, [r1]
	lsr r2, r2, #1
	lsl r2, r2, #4
	ldrb r5, [r4, #5]
	mov r3, #15
	add r1, r3, #0
	and r1, r1, r5
	orr r1, r1, r2
	strb r1, [r4, #5]
	ldr r4, _080E7BD0  @ =0x00000BD2
	add r6, r6, r4
	add r6, r0, r6
	ldrb r1, [r6]
	mov r2, #192
	and r2, r2, r1
	mov r4, r8
	ldrb r1, [r4]
	add r1, r1, r9
	ldrb r1, [r1]
	and r3, r3, r1
	orr r2, r2, r3
	strb r2, [r6]
	bl sub_080E7D28
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r1}
	bx r1
_080E7BB8:
	.4byte gUnknown_03003E74
_080E7BBC:
	.4byte gUnknown_03002780
_080E7BC0:
	.4byte gUnknown_081778B4
_080E7BC4:
	.4byte gUnknown_081778C0
_080E7BC8:
	.4byte 0x00000A32
_080E7BCC:
	.4byte 0xFFFFFC00
_080E7BD0:
	.4byte 0x00000BD2
	THUMB_FUNC_END sub_080E7B2C

