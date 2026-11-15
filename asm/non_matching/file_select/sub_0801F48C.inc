	THUMB_FUNC_START sub_0801F48C
sub_0801F48C: @ 0x0801F48C
	push {r4,lr}
	add r4, r0, #0
	bl sub_0801F668
	ldr r1, _0801F4D0  @ =gUnknown_0813B120
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl 0x08003828
	ldr r0, [r4, #40]
	ldr r1, _0801F4D4  @ =0x00FF8000
	and r0, r0, r1
	mov r1, #144
	lsl r1, r1, #11
	cmp r0, r1
	bne _0801F4C8
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
_0801F4C8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801F4D0:
	.4byte gUnknown_0813B120
_0801F4D4:
	.4byte 0x00FF8000
	THUMB_FUNC_END sub_0801F48C

