	THUMB_FUNC_START sub_080961E0
sub_080961E0: @ 0x080961E0
	push {r4,lr}
	ldr r2, _08096218  @ =gRam
	ldr r0, _0809621C  @ =0x00001705
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #2
	mov r4, #0
	orr r0, r0, r1
	strb r0, [r3]
	ldr r1, _08096220  @ =0x0000097C
	add r0, r2, r1
	ldrb r1, [r0]
	lsl r0, r1, #24
	asr r0, r0, #28
	orr r0, r0, r1
	mov r1, #150
	lsl r1, r1, #4
	add r3, r2, r1
	strb r0, [r3]
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08096228
	ldr r1, _08096224  @ =0x0000172C
	add r0, r2, r1
	strb r4, [r0]
	b _080962BA
	.byte 0x00
	.byte 0x00
_08096218:
	.4byte gRam
_0809621C:
	.4byte 0x00001705
_08096220:
	.4byte 0x0000097C
_08096224:
	.4byte 0x0000172C
_08096228:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08096260
	add r1, r1, #23
	add r0, r2, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0809624E
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_0809624E:
	strb r1, [r3]
	ldr r1, _0809625C  @ =0x00000961
	add r0, r2, r1
	strb r4, [r0]
	mov r4, #0
	b _08096280
	.byte 0x00
	.byte 0x00
_0809625C:
	.4byte 0x00000961
_08096260:
	ldr r1, _080962C0  @ =0x000016D7
	add r0, r2, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08096276
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_08096276:
	strb r1, [r3]
	ldr r1, _080962C4  @ =0x00000961
	add r0, r2, r1
	strb r4, [r0]
	mov r4, #2
_08096280:
	add r3, r2, #0
	ldr r1, _080962C8  @ =0x00001705
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08096296
	ldr r1, _080962CC  @ =0x000016D5
	add r0, r3, r1
	strb r4, [r0]
_08096296:
	mov r0, #150
	lsl r0, r0, #4
	add r4, r3, r0
	mov r1, #0
	ldrsh r0, [r4, r1]
	cmp r0, #127
	ble _080962AC
	ldr r0, _080962C4  @ =0x00000961
	add r1, r3, r0
	mov r0, #255
	strb r0, [r1]
_080962AC:
	mov r0, #182
	lsl r0, r0, #5
	add r1, r2, r0
	ldrh r0, [r1]
	ldrh r4, [r4]
	add r0, r0, r4
	strh r0, [r1]
_080962BA:
	pop {r4}
	pop {r0}
	bx r0
_080962C0:
	.4byte 0x000016D7
_080962C4:
	.4byte 0x00000961
_080962C8:
	.4byte 0x00001705
_080962CC:
	.4byte 0x000016D5
	THUMB_FUNC_END sub_080961E0

