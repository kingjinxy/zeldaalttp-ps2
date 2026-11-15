	THUMB_FUNC_START sub_08113A60
sub_08113A60: @ 0x08113A60
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08113A9C  @ =gRam
	ldr r0, _08113AA0  @ =0x00001898
	add r5, r1, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _08113A8E
	mov r2, #182
	lsl r2, r2, #5
	add r0, r1, r2
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r0, _08113AA4  @ =0x0000117F
	cmp r1, r0
	bgt _08113A88
	add r0, r4, #0
	bl sub_08124C28
_08113A88:
	ldrb r0, [r5]
	cmp r0, #0
	beq _08113A96
_08113A8E:
	add r0, r4, #0
	mov r1, #32
	bl sub_08112E80
_08113A96:
	pop {r4,r5}
	pop {r0}
	bx r0
_08113A9C:
	.4byte gRam
_08113AA0:
	.4byte 0x00001898
_08113AA4:
	.4byte 0x0000117F
	THUMB_FUNC_END sub_08113A60

