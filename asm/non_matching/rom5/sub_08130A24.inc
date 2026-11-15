	THUMB_FUNC_START sub_08130A24
sub_08130A24: @ 0x08130A24
	push {lr}
	ldr r2, _08130A54  @ =0x00002669
	ldr r3, _08130A58  @ =gRam
	ldr r1, _08130A5C  @ =0x000009C6
	add r0, r3, r1
	ldrh r1, [r0]
	cmp r1, #127
	bls _08130A6C
	ldr r1, _08130A60  @ =0x000009DA
	add r0, r3, r1
	ldrh r1, [r0]
	ldr r3, _08130A64  @ =0xFFFFFE7E
	add r0, r1, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #1
	bls _08130A4E
	mov r0, #192
	lsl r0, r0, #1
	cmp r1, r0
	bne _08130A76
_08130A4E:
	ldr r2, _08130A68  @ =0x000019C6
	b _08130A76
	.byte 0x00
	.byte 0x00
_08130A54:
	.4byte 0x00002669
_08130A58:
	.4byte gRam
_08130A5C:
	.4byte 0x000009C6
_08130A60:
	.4byte 0x000009DA
_08130A64:
	.4byte 0xFFFFFE7E
_08130A68:
	.4byte 0x000019C6
_08130A6C:
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08130A76
	ldr r2, _08130AA4  @ =0x00002A32
_08130A76:
	add r0, r2, #0
	bl sub_08133468
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r0, _08130AA8  @ =gUnknown_02000850
	strh r2, [r0]
	add r0, r0, #32
	strh r2, [r0]
	add r0, r0, #32
	strh r2, [r0]
	add r0, r0, #32
	strh r2, [r0]
	add r0, r0, #32
	strh r2, [r0]
	add r0, r0, #32
	strh r2, [r0]
	ldr r0, _08130AAC  @ =gRam
	ldr r1, _08130AB0  @ =0x000009CC
	add r0, r0, r1
	strh r2, [r0]
	pop {r0}
	bx r0
_08130AA4:
	.4byte 0x00002A32
_08130AA8:
	.4byte gUnknown_02000850
_08130AAC:
	.4byte gRam
_08130AB0:
	.4byte 0x000009CC
	THUMB_FUNC_END sub_08130A24

