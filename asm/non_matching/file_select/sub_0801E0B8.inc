	THUMB_FUNC_START sub_0801E0B8
sub_0801E0B8: @ 0x0801E0B8
	push {r4,lr}
	add r4, r0, #0
	bl sub_08009694
	mov r0, #180
	strb r0, [r4, #23]
	bl sub_0800099C
	mov r1, #15
	and r1, r1, r0
	cmp r1, #6
	bhi _0801E0F6
	mov r0, #2
	strb r0, [r4, #20]
	add r0, r0, #254
	str r0, [r4, #12]
	bl sub_0801E3B4
	add r1, r0, #0
	str r1, [r4, #88]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl sub_0801E360
	b _0801E10A
_0801E0F6:
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #45
	strb r0, [r4, #24]
	mov r0, #96
	str r0, [r4, #12]
	add r0, r4, #0
	mov r1, #0
	bl sub_0801E360
_0801E10A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E0B8

