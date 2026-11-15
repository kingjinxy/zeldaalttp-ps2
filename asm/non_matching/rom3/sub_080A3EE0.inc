	THUMB_FUNC_START sub_080A3EE0
sub_080A3EE0: @ 0x080A3EE0
	push {r4-r7,lr}
	ldr r1, _080A3FE8  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r6, r1, r0
	ldrh r7, [r6]
	mov r2, #0
	ldr r3, _080A3FEC  @ =0x000009AD
	add r0, r1, r3
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #19
	beq _080A3F00
	mov r2, #24
	cmp r0, #20
	bne _080A3F40
_080A3F00:
	mov r0, #150
	lsl r0, r0, #4
	add r5, r4, r0
	add r3, r2, #0
	strb r2, [r5]
	mov r2, #0
	ldr r1, _080A3FF0  @ =0x00000B0A
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080A3F1C
	mov r2, #12
_080A3F1C:
	add r1, r2, r3
	strb r1, [r5]
	ldr r2, _080A3FF4  @ =0x000016D4
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #5
	bls _080A3F2C
	mov r0, #0
_080A3F2C:
	lsl r0, r0, #1
	add r0, r1, r0
	ldr r2, _080A3FF8  @ =gUnknown_0816B35E
	mov r1, #254
	and r0, r0, r1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r3, [r6]
	add r0, r0, r3
	strh r0, [r6]
_080A3F40:
	mov r6, #182
	lsl r6, r6, #5
	add r5, r4, r6
	ldr r1, _080A3FFC  @ =0x00000958
	add r0, r4, r1
	ldrb r1, [r0]
	ldrb r0, [r5]
	sub r0, r0, r1
	ldr r2, _080A4000  @ =0x00000961
	add r1, r4, r2
	mov r3, #0
	strb r0, [r1]
	add r6, r6, #4
	add r2, r4, r6
	ldr r1, _080A4004  @ =0x00000952
	add r0, r4, r1
	ldrb r1, [r0]
	ldrb r0, [r2]
	sub r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strb r0, [r1]
	add r6, r6, #51
	add r0, r4, r6
	mov r1, #128
	strb r1, [r0]
	ldr r2, _080A4008  @ =0x000016F6
	add r0, r4, r2
	strb r1, [r0]
	add r6, r6, #234
	add r0, r4, r6
	ldrb r0, [r0]
	neg r0, r0
	lsr r0, r0, #31
	add r2, r2, #60
	add r1, r4, r2
	strb r0, [r1]
	sub r6, r6, #174
	add r0, r4, r6
	strb r3, [r0]
	ldr r3, _080A400C  @ =gUnknown_0816B326
	mov r0, #161
	lsl r0, r0, #4
	add r2, r4, r0
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	sub r6, r6, #16
	add r0, r4, r6
	strb r1, [r0]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldr r2, _080A4010  @ =0x00001724
	add r1, r4, r2
	strb r0, [r1]
	ldr r1, _080A4014  @ =gUnknown_0816B320
	ldr r3, _080A4018  @ =0x000015F7
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r6, r6, #191
	add r0, r4, r6
	strh r1, [r0]
	bl sub_080A401C
	ldr r1, _080A3FEC  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	sub r0, r0, #19
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080A3FE2
	strh r7, [r5]
_080A3FE2:
	pop {r4-r7}
	pop {r0}
	bx r0
_080A3FE8:
	.4byte gRam
_080A3FEC:
	.4byte 0x000009AD
_080A3FF0:
	.4byte 0x00000B0A
_080A3FF4:
	.4byte 0x000016D4
_080A3FF8:
	.4byte gUnknown_0816B35E
_080A3FFC:
	.4byte 0x00000958
_080A4000:
	.4byte 0x00000961
_080A4004:
	.4byte 0x00000952
_080A4008:
	.4byte 0x000016F6
_080A400C:
	.4byte gUnknown_0816B326
_080A4010:
	.4byte 0x00001724
_080A4014:
	.4byte gUnknown_0816B320
_080A4018:
	.4byte 0x000015F7
	THUMB_FUNC_END sub_080A3EE0

