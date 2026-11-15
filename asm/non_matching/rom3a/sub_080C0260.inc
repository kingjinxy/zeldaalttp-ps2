	THUMB_FUNC_START sub_080C0260
sub_080C0260: @ 0x080C0260
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsl r1, r1, #24
	lsr r6, r0, #24
	lsr r7, r1, #24
	cmp r7, #3
	bgt _080C02F6
	ldr r0, _080C0308  @ =gUnknown_03003E74
	mov r8, r0
	ldr r1, _080C030C  @ =gRam
	mov r9, r1
	ldr r2, _080C0310  @ =0x00001724
	add r2, r2, r9
	mov r10, r2
_080C0286:
	ldr r0, _080C0314  @ =gUnknown_08171C36
	add r5, r6, r0
	ldrb r0, [r5]
	cmp r0, #255
	beq _080C02EA
	mov r1, r8
	ldrh r0, [r1]
	ldr r2, _080C0318  @ =0x00000964
	add r2, r2, r9
	ldr r1, _080C031C  @ =gUnknown_08171CA6
	lsl r3, r6, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r9
	ldr r2, _080C0320  @ =gUnknown_08171C6E
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	str r2, [sp, #4]
	ldrb r3, [r5]
	ldr r4, _080C0324  @ =gUnknown_08171C52
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	mov r2, r10
	ldrb r2, [r2]
	mov r12, r2
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	ldr r2, [sp, #4]
	bl sub_080C6368
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080C02EA:
	add r7, r7, #1
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r7, #3
	ble _080C0286
_080C02F6:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C0308:
	.4byte gUnknown_03003E74
_080C030C:
	.4byte gRam
_080C0310:
	.4byte 0x00001724
_080C0314:
	.4byte gUnknown_08171C36
_080C0318:
	.4byte 0x00000964
_080C031C:
	.4byte gUnknown_08171CA6
_080C0320:
	.4byte gUnknown_08171C6E
_080C0324:
	.4byte gUnknown_08171C52
	THUMB_FUNC_END sub_080C0260

