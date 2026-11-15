	THUMB_FUNC_START sub_08077CA0
sub_08077CA0: @ 0x08077CA0
	push {r4,r5,lr}
	ldr r1, _08077CEC  @ =gRam
	ldr r0, _08077CF0  @ =0x00000B54
	add r2, r1, r0
	ldrh r0, [r2]
	cmp r0, #0
	beq _08077CE4
	mov r0, #150
	lsl r0, r0, #4
	add r1, r1, r0
	mov r0, #0
	strh r0, [r1]
	add r4, r1, #0
	add r5, r2, #0
_08077CBC:
	ldrh r0, [r4]
	lsl r0, r0, #16
	asr r0, r0, #17
	lsl r0, r0, #1
	ldr r2, _08077CF4  @ =gUnknown_02002880
	add r1, r0, r2
	ldrh r1, [r1]
	ldr r2, _08077CF8  @ =gUnknown_02002A80
	add r0, r0, r2
	ldrh r0, [r0]
	bl sub_0809265C
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r5]
	cmp r0, r1
	bne _08077CBC
_08077CE4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077CEC:
	.4byte gRam
_08077CF0:
	.4byte 0x00000B54
_08077CF4:
	.4byte gUnknown_02002880
_08077CF8:
	.4byte gUnknown_02002A80
	THUMB_FUNC_END sub_08077CA0

