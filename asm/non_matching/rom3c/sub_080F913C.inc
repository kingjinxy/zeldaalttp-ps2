	THUMB_FUNC_START sub_080F913C
sub_080F913C: @ 0x080F913C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080F91B0
	ldr r6, _080F9184  @ =gRam
	ldr r2, _080F9188  @ =0x00000F52
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080F9190
	add r2, r2, #80
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _080F918C  @ =0x00001663
	add r1, r6, r0
	mov r0, #12
	strb r0, [r1]
	bl sub_0812F9A8
	add r0, r4, #0
	bl sub_081146A4
	b _080F91B0
_080F9184:
	.4byte gRam
_080F9188:
	.4byte 0x00000F52
_080F918C:
	.4byte 0x00001663
_080F9190:
	ldr r1, _080F91B8  @ =0x00000119
	add r0, r7, #0
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F91B0
	ldr r1, _080F91BC  @ =0x00001663
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F91B0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080F91B0:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F91B8:
	.4byte 0x00000119
_080F91BC:
	.4byte 0x00001663
	THUMB_FUNC_END sub_080F913C

