	THUMB_FUNC_START sub_08011920
sub_08011920: @ 0x08011920
	push {r4,lr}
	add r4, r0, #0
	ldr r1, [r4, #84]
	cmp r1, #0
	beq _08011930
	ldr r0, [r4, #88]
	cmp r0, #0
	bne _08011936
_08011930:
	mov r0, #208
	strh r0, [r4, #54]
	b _0801195A
_08011936:
	add r0, r1, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldrh r0, [r4, #50]
	sub r0, r0, #48
	strh r0, [r4, #50]
	ldr r2, [r4, #88]
	mov r1, #50
	ldrsh r0, [r2, r1]
	add r0, r0, #16
	mov r3, #50
	ldrsh r1, [r4, r3]
	cmp r0, r1
	ble _0801195A
	ldrh r0, [r2, #50]
	add r0, r0, #16
	strh r0, [r4, #50]
_0801195A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011920

