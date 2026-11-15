	THUMB_FUNC_START sub_08113904
sub_08113904: @ 0x08113904
	push {r4,r5,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _0811392C  @ =0x45800000
	add r0, r4, #0
	bl __gtsf2
	cmp r0, #0
	ble _08113930
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	cmp r1, #0
	bne _08113930
	add r0, r5, #0
	bl sub_08112408
	b _08113942
_0811392C:
	.4byte 0x45800000
_08113930:
	ldr r1, _08113948  @ =0x44100000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _08113942
	add r0, r5, #0
	bl sub_08112094
_08113942:
	pop {r4,r5}
	pop {r0}
	bx r0
_08113948:
	.4byte 0x44100000
	THUMB_FUNC_END sub_08113904

