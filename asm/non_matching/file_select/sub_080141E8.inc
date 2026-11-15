	THUMB_FUNC_START sub_080141E8
sub_080141E8: @ 0x080141E8
	push {r4,r5,lr}
	ldr r0, _08014244  @ =gUnknown_03006C80
	mov r4, #0
	ldrb r0, [r0]
	cmp r4, r0
	bcs _0801423E
_080141F4:
	add r0, r4, #0
	bl sub_080141AC
	add r3, r0, #0
	ldr r0, _08014244  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	lsl r0, r0, #4
	ldr r1, _08014248  @ =gUnknown_08429A4C
	add r1, r0, r1
	mov r2, #0
	ldrh r0, [r1]
	add r5, r4, #1
	cmp r0, r3
	bgt _08014222
_08014210:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r1, r1, #2
	cmp r2, #6
	bhi _08014222
	ldrh r0, [r1]
	cmp r0, r3
	ble _08014210
_08014222:
	ldr r3, _08014244  @ =gUnknown_03006C80
	add r0, r3, #0
	add r0, r0, #84
	add r0, r4, r0
	add r1, r2, #0
	cmp r2, #7
	bls _08014232
	mov r1, #7
_08014232:
	strb r1, [r0]
	lsl r0, r5, #24
	lsr r4, r0, #24
	ldrb r3, [r3]
	cmp r4, r3
	bcc _080141F4
_0801423E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08014244:
	.4byte gUnknown_03006C80
_08014248:
	.4byte gUnknown_08429A4C
	THUMB_FUNC_END sub_080141E8

