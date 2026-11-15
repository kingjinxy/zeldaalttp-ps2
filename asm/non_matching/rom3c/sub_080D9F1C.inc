	THUMB_FUNC_START sub_080D9F1C
sub_080D9F1C: @ 0x080D9F1C
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r5, _080D9FA8  @ =gRam
	ldr r0, _080D9FAC  @ =0x00000EE2
	add r2, r5, r0
	add r2, r1, r2
	ldrb r0, [r2]
	add r0, r0, #8
	mov r3, #0
	mov r8, r3
	strb r0, [r2]
	ldr r0, _080D9FB0  @ =0x00000ED2
	add r6, r5, r0
	add r2, r1, r6
	ldrb r0, [r2]
	add r0, r0, #6
	strb r0, [r2]
	mov r0, #193
	bl sub_080CA538
	add r4, r0, #0
	ldr r1, _080D9FB4  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080D9FB8  @ =0x00001172
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	add r6, r4, r6
	ldr r3, _080D9FBC  @ =0x00000964
	add r0, r5, r3
	ldrb r0, [r0]
	add r0, r0, #40
	strb r0, [r6]
	ldr r1, _080D9FC0  @ =0x00001012
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r8
	strb r2, [r0]
	ldr r3, _080D9FC4  @ =0x00001122
	add r0, r5, r3
	add r4, r4, r0
	mov r0, #12
	strb r0, [r4]
	ldr r0, _080D9FC8  @ =0x00000AA8
	add r5, r5, r0
	ldrh r1, [r5]
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080D9F9E
	ldr r0, _080D9FCC  @ =0x0000BFFF
	and r0, r0, r1
	strh r0, [r5]
_080D9F9E:
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080D9FA8:
	.4byte gRam
_080D9FAC:
	.4byte 0x00000EE2
_080D9FB0:
	.4byte 0x00000ED2
_080D9FB4:
	.4byte 0x00000F62
_080D9FB8:
	.4byte 0x00001172
_080D9FBC:
	.4byte 0x00000964
_080D9FC0:
	.4byte 0x00001012
_080D9FC4:
	.4byte 0x00001122
_080D9FC8:
	.4byte 0x00000AA8
_080D9FCC:
	.4byte 0x0000BFFF
	THUMB_FUNC_END sub_080D9F1C

