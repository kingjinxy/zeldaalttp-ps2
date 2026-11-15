	THUMB_FUNC_START sub_0801E76C
sub_0801E76C: @ 0x0801E76C
	push {r4,lr}
	add r4, r0, #0
	bl 0x08009664
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003F1C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _0801E78C
	cmp r0, #1
	beq _0801E794
	b _0801E79A
_0801E78C:
	mov r0, #7
	strb r0, [r4, #20]
	mov r0, #150
	strb r0, [r4, #23]
_0801E794:
	mov r0, #49
	bl 0x08003DFC
_0801E79A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E76C

