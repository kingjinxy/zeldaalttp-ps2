	THUMB_FUNC_START sub_0801AA00
sub_0801AA00: @ 0x0801AA00
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0801AA16
	add r0, r4, #0
	bl 0x08003828
_0801AA16:
	add r0, r4, #0
	bl 0x0800963C
	mov r1, #144
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _0801AA36
	mov r0, #5
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #4
	bl 0x08003870
_0801AA36:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801AA00

