	THUMB_FUNC_START sub_08115CA4
sub_08115CA4: @ 0x08115CA4
	push {r4,lr}
	ldr r1, _08115CE0  @ =gRam
	ldr r2, _08115CE4  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08115D20
	mov r3, #0
	ldr r4, _08115CE8  @ =0x000009B2
	add r0, r1, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08115D04
	mov r2, #2
	add r4, r4, #20
	add r0, r1, r4
	ldr r1, _08115CEC  @ =gUnknown_0817ECCE
	ldrh r0, [r0]
	add r1, r1, #4
_08115CCE:
	ldrh r4, [r1]
	cmp r0, r4
	beq _08115CF0
	sub r1, r1, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _08115CCE
	b _08115D20
	.byte 0x00
	.byte 0x00
_08115CE0:
	.4byte gRam
_08115CE4:
	.4byte 0x000009AD
_08115CE8:
	.4byte 0x000009B2
_08115CEC:
	.4byte gUnknown_0817ECCE
_08115CF0:
	add r0, r2, #0
	add r1, r3, #0
	bl sub_08115F58
	b _08115D20
_08115CFA:
	add r0, r2, #0
	add r1, r3, #0
	bl sub_08115F40
	b _08115D20
_08115D04:
	mov r3, #1
	mov r2, #6
	ldr r4, _08115D28  @ =0x000009DA
	add r0, r1, r4
	ldr r1, _08115D2C  @ =gUnknown_0817EC48
	ldrh r0, [r0]
	add r1, r1, #12
_08115D12:
	ldrh r4, [r1]
	cmp r0, r4
	beq _08115CFA
	sub r1, r1, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _08115D12
_08115D20:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08115D28:
	.4byte 0x000009DA
_08115D2C:
	.4byte gUnknown_0817EC48
	THUMB_FUNC_END sub_08115CA4

