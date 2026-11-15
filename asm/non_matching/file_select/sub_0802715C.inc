	THUMB_FUNC_START sub_0802715C
sub_0802715C: @ 0x0802715C
	push {r4-r6,lr}
	add r4, r0, #0
	ldrb r2, [r4, #10]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _080271D0
	add r3, r4, #0
	add r3, r3, #116
	ldrb r0, [r3]
	cmp r0, #0
	bne _080271D0
	mov r0, #50
	ldrsh r1, [r4, r0]
	add r0, r4, #0
	add r0, r0, #120
	ldrh r0, [r0]
	cmp r1, r0
	bne _08027190
	mov r1, #54
	ldrsh r0, [r4, r1]
	add r1, r4, #0
	add r1, r1, #122
	ldrh r1, [r1]
	cmp r0, r1
	beq _080271D0
_08027190:
	ldr r0, _080271C8  @ =gUnknown_08137B10
	mov r1, #31
	and r1, r1, r2
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r2, _080271CC  @ =gUnknown_0201F000
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r1]
	ldr r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	beq _080271D0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #45
	strb r0, [r4, #23]
	mov r0, #1
	strb r0, [r3]
	add r0, r4, #0
	mov r1, #1
	bl 0x08003870
	b _08027212
_080271C8:
	.4byte gUnknown_08137B10
_080271CC:
	.4byte gUnknown_0201F000
_080271D0:
	ldr r0, [r4, #96]
	mov r1, #240
	and r0, r0, r1
	lsr r5, r0, #4
	ldr r0, _08027218  @ =gUnknown_0813CD5C
	add r0, r5, r0
	ldrb r0, [r0]
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	cmp r0, #255
	beq _080271EE
	add r0, r4, #0
	bl sub_080272D0
_080271EE:
	add r0, r4, #0
	add r0, r0, #117
	ldrb r1, [r0]
	add r6, r0, #0
	cmp r5, r1
	beq _08027208
	add r0, r5, #0
	bic r0, r0, r1
	cmp r0, #0
	beq _08027208
	mov r0, #18
	bl 0x08003DFC
_08027208:
	strb r5, [r6]
	add r1, r5, #1
	add r0, r4, #0
	bl 0x08003870
_08027212:
	pop {r4-r6}
	pop {r0}
	bx r0
_08027218:
	.4byte gUnknown_0813CD5C
	THUMB_FUNC_END sub_0802715C

