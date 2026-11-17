	THUMB_FUNC_START sub_0802E9B8
sub_0802E9B8: @ 0x0802E9B8
	push {r4,r5,lr}
	ldr r5, _0802EA04  @ =gUnknown_02016D60
	ldrb r0, [r5, #11]
	cmp r0, #0
	beq _0802E9FE
	ldr r0, _0802EA08  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802E9FE
	ldr r0, _0802EA0C  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r4, #3
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0802E9F6
	bl sub_0800099C
	add r1, r0, #0
	ldr r2, _0802EA10  @ =0x03000030
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
_0802E9F6:
	ldrb r0, [r5, #12]
	lsl r0, r0, #4
	bl sub_0800C1EC
_0802E9FE:
	pop {r4,r5}
	pop {r0}
	bx r0
_0802EA04:
	.4byte gUnknown_02016D60
_0802EA08:
	.4byte gUnknown_03000520
_0802EA0C:
	.4byte gUnknown_03000948
_0802EA10:
	.4byte 0x03000030
	THUMB_FUNC_END sub_0802E9B8

