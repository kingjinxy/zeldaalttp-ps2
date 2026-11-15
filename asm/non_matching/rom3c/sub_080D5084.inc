	THUMB_FUNC_START sub_080D5084
sub_080D5084: @ 0x080D5084
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r6, _080D5158  @ =gRam
	ldr r0, _080D515C  @ =0x0000096C
	add r1, r6, r0
	mov r0, #0
	mov r8, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _080D5160  @ =gUnknown_08175098
	add r0, r7, #0
	bl sub_080C94D0
	mov r1, #128
	lsl r1, r1, #2
	mov r0, #2
	bl sub_080C6174
	ldr r4, _080D5164  @ =gUnknown_03003E74
	ldrh r1, [r4]
	lsl r1, r1, #3
	add r1, r1, r6
	ldr r5, _080D5168  @ =0x00000555
	add r1, r1, r5
	ldrb r3, [r1]
	mov r2, #15
	add r0, r2, #0
	and r0, r0, r3
	mov r3, #144
	orr r0, r0, r3
	strb r0, [r1]
	ldrh r0, [r4]
	add r0, r0, #1
	lsl r0, r0, #3
	add r0, r0, r6
	add r0, r0, r5
	ldrb r1, [r0]
	and r2, r2, r1
	orr r2, r2, r3
	strb r2, [r0]
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D514E
	bl sub_0809E3CC
	cmp r0, #0
	bne _080D514E
	add r0, r7, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D514E
	ldr r1, _080D516C  @ =0x000016D5
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _080D514E
	ldr r1, _080D5170  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080D5174  @ =0x00000546
	add r0, r6, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080D514E
	ldr r1, _080D5178  @ =0x00001776
	add r0, r6, r1
	mov r1, r8
	strb r1, [r0]
	ldr r0, _080D517C  @ =0x00000F62
	add r4, r6, r0
	add r4, r7, r4
	ldrb r0, [r4]
	add r0, r0, #76
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080A1588
	ldr r1, _080D5180  @ =0x00000FA2
	add r0, r6, r1
	add r0, r7, r0
	mov r1, r8
	strb r1, [r0]
	ldr r0, _080D5184  @ =0x000016B3
	add r2, r6, r0
	mov r0, #1
	ldrb r4, [r4]
	lsl r0, r0, r4
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
_080D514E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080D5158:
	.4byte gRam
_080D515C:
	.4byte 0x0000096C
_080D5160:
	.4byte gUnknown_08175098
_080D5164:
	.4byte gUnknown_03003E74
_080D5168:
	.4byte 0x00000555
_080D516C:
	.4byte 0x000016D5
_080D5170:
	.4byte gUnknown_03003E70
_080D5174:
	.4byte 0x00000546
_080D5178:
	.4byte 0x00001776
_080D517C:
	.4byte 0x00000F62
_080D5180:
	.4byte 0x00000FA2
_080D5184:
	.4byte 0x000016B3
	THUMB_FUNC_END sub_080D5084

