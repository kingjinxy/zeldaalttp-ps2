	THUMB_FUNC_START sub_081138BC
sub_081138BC: @ 0x081138BC
	push {r4,r5,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _081138E4  @ =0x45800000
	add r0, r4, #0
	bl __gtsf2
	cmp r0, #0
	ble _081138E8
	bl GetRandomInt
	mov r1, #127
	and r1, r1, r0
	cmp r1, #0
	bne _081138E8
	add r0, r5, #0
	bl sub_08113AA8
	b _081138FA
_081138E4:
	.4byte 0x45800000
_081138E8:
	ldr r1, _08113900  @ =0x44100000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _081138FA
	add r0, r5, #0
	bl sub_08112094
_081138FA:
	pop {r4,r5}
	pop {r0}
	bx r0
_08113900:
	.4byte 0x44100000
	THUMB_FUNC_END sub_081138BC

