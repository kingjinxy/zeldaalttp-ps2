	THUMB_FUNC_START sub_08130978
sub_08130978: @ 0x08130978
	push {lr}
	ldr r1, _081309A8  @ =0x00002669
	ldr r3, _081309AC  @ =gRam
	ldr r2, _081309B0  @ =0x000009C6
	add r0, r3, r2
	ldrh r2, [r0]
	cmp r2, #127
	bls _081309C0
	ldr r2, _081309B4  @ =0x000009DA
	add r0, r3, r2
	ldrh r2, [r0]
	ldr r3, _081309B8  @ =0xFFFFFE7E
	add r0, r2, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #1
	bls _081309A2
	mov r0, #192
	lsl r0, r0, #1
	cmp r2, r0
	bne _081309CA
_081309A2:
	ldr r1, _081309BC  @ =0x000019C6
	b _081309CA
	.byte 0x00
	.byte 0x00
_081309A8:
	.4byte 0x00002669
_081309AC:
	.4byte gRam
_081309B0:
	.4byte 0x000009C6
_081309B4:
	.4byte 0x000009DA
_081309B8:
	.4byte 0xFFFFFE7E
_081309BC:
	.4byte 0x000019C6
_081309C0:
	mov r0, #64
	and r0, r0, r2
	cmp r0, #0
	beq _081309CA
	ldr r1, _08130A10  @ =0x00002A32
_081309CA:
	add r0, r1, #0
	bl sub_08133468
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r0, _08130A14  @ =gUnknown_02000C50
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	ldr r0, _08130A18  @ =gUnknown_02000850
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	ldr r0, _08130A1C  @ =gRam
	ldr r2, _08130A20  @ =0x000009CC
	add r0, r0, r2
	strh r1, [r0]
	pop {r0}
	bx r0
_08130A10:
	.4byte 0x00002A32
_08130A14:
	.4byte gUnknown_02000C50
_08130A18:
	.4byte gUnknown_02000850
_08130A1C:
	.4byte gRam
_08130A20:
	.4byte 0x000009CC
	THUMB_FUNC_END sub_08130978

