	THUMB_FUNC_START sub_08032888
sub_08032888: @ 0x08032888
	push {r4,lr}
	ldr r1, _080328E0  @ =gUnknown_08427A28
	ldr r0, _080328E4  @ =gSubState
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r0, _080328E8  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080328DA
	ldr r0, _080328EC  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r4, #3
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080328DA
	ldr r0, _080328F0  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _080328DA
	bl sub_0800099C
	add r1, r0, #0
	ldr r2, _080328F4  @ =0x03000030
	and r1, r1, r4
	lsl r1, r1, #5
	mov r0, #150
	lsl r0, r0, #6
	add r1, r1, r0
	ldr r0, [r2]
	add r0, r0, r1
	mov r1, #15
	mov r2, #1
	bl load_palette
_080328DA:
	pop {r4}
	pop {r0}
	bx r0
_080328E0:
	.4byte gUnknown_08427A28
_080328E4:
	.4byte gSubState
_080328E8:
	.4byte gUnknown_0201F000
_080328EC:
	.4byte gUnknown_03000948
_080328F0:
	.4byte gUnknown_03000520
_080328F4:
	.4byte 0x03000030
	THUMB_FUNC_END sub_08032888

