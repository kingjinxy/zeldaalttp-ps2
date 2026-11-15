	THUMB_FUNC_START sub_08127AF4
sub_08127AF4: @ 0x08127AF4
	push {r4,lr}
	add r1, r0, #0
	ldr r4, _08127B20  @ =gRam
	ldr r2, _08127B24  @ =0x00001AF8
	add r0, r4, r2
	ldr r0, [r0]
	ldr r3, _08127B28  @ =0x00001AD6
	add r2, r4, r3
	ldrh r2, [r2]
	add r1, r1, r2
	add r1, r1, #5
	bl sub_08129E0C
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08127B30
	ldr r2, _08127B2C  @ =0x00001AED
	add r0, r4, r2
	b _08127B34
_08127B20:
	.4byte gRam
_08127B24:
	.4byte 0x00001AF8
_08127B28:
	.4byte 0x00001AD6
_08127B2C:
	.4byte 0x00001AED
_08127B30:
	ldr r3, _08127B70  @ =0x00001AEC
	add r0, r4, r3
_08127B34:
	ldrb r3, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08127B40
	lsr r3, r3, #4
_08127B40:
	mov r0, #15
	and r3, r3, r0
	ldr r2, _08127B74  @ =gRam
	ldr r4, _08127B78  @ =0x0000098E
	add r0, r2, r4
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #0
	bne _08127B88
	ldr r0, _08127B7C  @ =0x00001AD2
	add r2, r2, r0
	ldrh r0, [r2]
	ldr r4, _08127B80  @ =gTextPointer
	add r0, r0, r4
	strb r1, [r0]
	ldrh r0, [r2]
	ldr r1, _08127B84  @ =gUnknown_02005481
	add r0, r0, r1
	mov r1, #160
	orr r3, r3, r1
	strb r3, [r0]
	ldrh r0, [r2]
	add r0, r0, #2
	b _08127B9C
_08127B70:
	.4byte 0x00001AEC
_08127B74:
	.4byte gRam
_08127B78:
	.4byte 0x0000098E
_08127B7C:
	.4byte 0x00001AD2
_08127B80:
	.4byte gTextPointer
_08127B84:
	.4byte gUnknown_02005481
_08127B88:
	ldr r4, _08127BA4  @ =0x00001AD2
	add r2, r2, r4
	ldrh r0, [r2]
	ldr r1, _08127BA8  @ =gTextPointer
	add r0, r0, r1
	add r1, r3, #0
	add r1, r1, #48
	strb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #1
_08127B9C:
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
_08127BA4:
	.4byte 0x00001AD2
_08127BA8:
	.4byte gTextPointer
	THUMB_FUNC_END sub_08127AF4

