	THUMB_FUNC_START sub_08072CF4
sub_08072CF4: @ 0x08072CF4
	push {lr}
	ldr r2, _08072D5C  @ =0x04000008
	ldrh r0, [r2]
	mov r1, #64
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _08072D60  @ =gRam
	ldr r2, _08072D64  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #13
	beq _08072D18
	ldr r3, _08072D68  @ =0x000009C6
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #0
	beq _08072D7C
_08072D18:
	ldr r3, _08072D68  @ =0x000009C6
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #45
	beq _08072D7C
	cmp r0, #15
	beq _08072D7C
	cmp r0, #129
	beq _08072D7C
	cmp r0, #128
	beq _08072D3E
	cmp r0, #17
	beq _08072D3E
	cmp r0, #16
	beq _08072D3E
	cmp r0, #2
	beq _08072D3E
	cmp r0, #0
	bne _08072D74
_08072D3E:
	ldr r0, _08072D6C  @ =gUnknown_02002300
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _08072D7C
	ldr r1, _08072D68  @ =0x000009C6
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #128
	beq _08072D7C
	ldr r3, _08072D70  @ =0x00000A3C
	add r1, r2, r3
	b _08072D78
	.byte 0x00
	.byte 0x00
_08072D5C:
	.4byte 0x04000008
_08072D60:
	.4byte gRam
_08072D64:
	.4byte 0x000009AD
_08072D68:
	.4byte 0x000009C6
_08072D6C:
	.4byte gUnknown_02002300
_08072D70:
	.4byte 0x00000A3C
_08072D74:
	ldr r0, _08072D84  @ =0x00000A3C
	add r1, r1, r0
_08072D78:
	ldr r0, _08072D88  @ =0x0000FFF1
	strh r0, [r1]
_08072D7C:
	bl sub_080709C0
	pop {r0}
	bx r0
_08072D84:
	.4byte 0x00000A3C
_08072D88:
	.4byte 0x0000FFF1
	THUMB_FUNC_END sub_08072CF4

