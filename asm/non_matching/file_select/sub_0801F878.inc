	THUMB_FUNC_START sub_0801F878
sub_0801F878: @ 0x0801F878
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _0801F8A8  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0801F89C
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_08009EA4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_080040C4
_0801F89C:
	add r0, r4, #0
	bl sub_08009694
	pop {r4}
	pop {r0}
	bx r0
_0801F8A8:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0801F878

