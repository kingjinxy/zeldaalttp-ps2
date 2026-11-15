	THUMB_FUNC_START sub_080FC3E8
sub_080FC3E8: @ 0x080FC3E8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	ldr r7, _080FC4A8  @ =gRam
	ldr r1, _080FC4AC  @ =0x00000F82
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080FC49E
	ldr r3, _080FC4B0  @ =0x0000178A
	add r0, r7, r3
	ldrb r1, [r0]
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	beq _080FC49E
	ldr r4, _080FC4B4  @ =0x000016F6
	add r0, r7, r4
	ldrb r0, [r0]
	cmp r0, #128
	beq _080FC49E
	bl sub_080C3C98
	ldr r0, _080FC4B8  @ =0x00000ED2
	add r4, r7, r0
	add r4, r6, r4
	ldrb r5, [r4]
	add r0, r5, #0
	add r0, r0, #8
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C4574
	strb r5, [r4]
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FC49E
	ldr r3, _080FC4BC  @ =0x00001022
	add r1, r7, r3
	add r1, r6, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #87
	mov r1, #0
	bl sub_0812A324
	add r0, r6, #0
	mov r1, #48
	bl sub_080C2CB4
	mov r4, #150
	lsl r4, r4, #4
	add r0, r7, r4
	ldrb r3, [r0]
	ldr r1, _080FC4C0  @ =0x000016CD
	add r0, r7, r1
	strb r3, [r0]
	add r4, r4, #1
	add r0, r7, r4
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r7, r1
	strb r2, [r0]
	ldr r4, _080FC4C4  @ =0x000016F8
	add r1, r7, r4
	mov r0, #8
	strb r0, [r1]
	ldr r0, _080FC4C8  @ =0x000015F0
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080FC496
	ldr r4, _080FC4CC  @ =0x000015F1
	add r0, r7, r4
	strb r3, [r0]
	ldr r3, _080FC4D0  @ =0x000015F2
	add r0, r7, r3
	strb r2, [r0]
	mov r0, #5
	strb r0, [r1]
_080FC496:
	mov r0, r8
	mov r1, #113
	bl sub_080CF0AC
_080FC49E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080FC4A8:
	.4byte gRam
_080FC4AC:
	.4byte 0x00000F82
_080FC4B0:
	.4byte 0x0000178A
_080FC4B4:
	.4byte 0x000016F6
_080FC4B8:
	.4byte 0x00000ED2
_080FC4BC:
	.4byte 0x00001022
_080FC4C0:
	.4byte 0x000016CD
_080FC4C4:
	.4byte 0x000016F8
_080FC4C8:
	.4byte 0x000015F0
_080FC4CC:
	.4byte 0x000015F1
_080FC4D0:
	.4byte 0x000015F2
	THUMB_FUNC_END sub_080FC3E8

