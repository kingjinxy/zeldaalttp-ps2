	THUMB_FUNC_START sub_0801828C
sub_0801828C: @ 0x0801828C
	push {r4,lr}
	add r4, r0, #0
	bl sub_08018514
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080182C2
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	ldr r0, [r4, #84]
	mov r1, #3
	bl sub_08003870
	bl sub_0800099C
	mov r1, #240
	and r0, r0, r1
	add r0, r0, #1
	add r1, r4, #0
	add r1, r1, #40
	strb r0, [r1]
_080182C2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801828C

