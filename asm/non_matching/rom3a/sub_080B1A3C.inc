	THUMB_FUNC_START sub_080B1A3C
sub_080B1A3C: @ 0x080B1A3C
	push {lr}
	ldr r2, _080B1AB4  @ =gRam
	mov r1, #157
	lsl r1, r1, #4
	add r0, r2, r1
	mov r3, #0
	strb r3, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r3, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r3, [r0]
	sub r1, r1, #26
	add r0, r2, r1
	strb r3, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r3, [r0]
	sub r1, r1, #13
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #20
	beq _080B1AA8
	ldr r1, _080B1AB8  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #10
	bne _080B1AD8
	ldr r0, _080B1ABC  @ =0x00000BB2
	add r1, r2, r0
	mov r0, #4
	strb r0, [r1]
	ldr r0, _080B1AC0  @ =0x00000BB4
	add r1, r2, r0
	mov r0, #33
	strb r0, [r1]
	ldr r1, _080B1AC4  @ =0x00000BB3
	add r0, r2, r1
	strb r3, [r0]
	ldr r3, _080B1AC8  @ =0x00000956
	add r1, r2, r3
	mov r0, #110
	strh r0, [r1]
	mov r1, #183
	lsl r1, r1, #1
	ldr r3, _080B1ACC  @ =0x00000BB8
	add r0, r2, r3
	strh r1, [r0]
	mov r0, #149
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #250
	strh r0, [r1]
_080B1AA8:
	ldr r0, _080B1AD0  @ =gUnknown_0816E974
	ldr r1, _080B1AD4  @ =gUnknown_02001600
	mov r2, #115
	bl CpuFastSet
	b _080B1AFE
_080B1AB4:
	.4byte gRam
_080B1AB8:
	.4byte 0x000009AD
_080B1ABC:
	.4byte 0x00000BB2
_080B1AC0:
	.4byte 0x00000BB4
_080B1AC4:
	.4byte 0x00000BB3
_080B1AC8:
	.4byte 0x00000956
_080B1ACC:
	.4byte 0x00000BB8
_080B1AD0:
	.4byte gUnknown_0816E974
_080B1AD4:
	.4byte gUnknown_02001600
_080B1AD8:
	ldr r3, _080B1B08  @ =0x00000BB2
	add r1, r2, r3
	mov r0, #4
	strb r0, [r1]
	ldr r0, _080B1B0C  @ =0x00000BB4
	add r1, r2, r0
	mov r0, #12
	strb r0, [r1]
	add r3, r3, #1
	add r1, r2, r3
	mov r0, #1
	strb r0, [r1]
	bl sub_080B198C
	ldr r0, _080B1B10  @ =gUnknown_0816EB34
	ldr r1, _080B1B14  @ =gUnknown_02001600
	mov r2, #115
	bl CpuFastSet
_080B1AFE:
	mov r0, #3
	bl sub_0806BD6C
	pop {r0}
	bx r0
_080B1B08:
	.4byte 0x00000BB2
_080B1B0C:
	.4byte 0x00000BB4
_080B1B10:
	.4byte gUnknown_0816EB34
_080B1B14:
	.4byte gUnknown_02001600
	THUMB_FUNC_END sub_080B1A3C

