	THUMB_FUNC_START sub_081139C4
sub_081139C4: @ 0x081139C4
	push {r4,r5,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _081139F0  @ =gRam
	ldr r1, _081139F4  @ =0x00001718
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #3
	bne _081139FC
	ldr r1, _081139F8  @ =0x45100000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _081139FC
	add r0, r5, #0
	mov r1, #0
	bl sub_081134D0
	b _08113A56
	.byte 0x00
	.byte 0x00
_081139F0:
	.4byte gRam
_081139F4:
	.4byte 0x00001718
_081139F8:
	.4byte 0x45100000
_081139FC:
	ldr r1, _08113A1C  @ =0x45800000
	add r0, r4, #0
	bl __gtsf2
	cmp r0, #0
	ble _08113A20
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	cmp r1, #0
	bne _08113A20
	add r0, r5, #0
	bl sub_08112408
	b _08113A56
_08113A1C:
	.4byte 0x45800000
_08113A20:
	ldr r1, _08113A40  @ =0x44AB2000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _08113A44
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	cmp r1, #0
	bne _08113A44
	add r0, r5, #0
	bl sub_081127B8
	b _08113A56
_08113A40:
	.4byte 0x44AB2000
_08113A44:
	ldr r1, _08113A5C  @ =0x44100000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _08113A56
	add r0, r5, #0
	bl sub_08112094
_08113A56:
	pop {r4,r5}
	pop {r0}
	bx r0
_08113A5C:
	.4byte 0x44100000
	THUMB_FUNC_END sub_081139C4

