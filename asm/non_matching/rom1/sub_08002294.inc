	thumb_func_start sub_08002294
sub_08002294: @ 0x08002294
	push {r4, lr}
	bl sub_08001D5C
	movs r3, #0x34
	ldrb r2, [r1, r3]
	lsrs r2, r2, #1
	blo _080022A8
	ldr r3, [r0, #0xc]
	lsrs r3, r3, #1
	str r3, [r0, #0xc]
_080022A8:
	lsrs r2, r2, #1
	blo _080022B2
	ldr r3, [r0, #0xc]
	lsls r3, r3, #1
	str r3, [r0, #0xc]
_080022B2:
	movs r3, #0x2b
	ldrb r3, [r0, r3]
	movs r2, #4
	tst r3, r2
	bne _080022F4
	movs r2, #8
	tst r3, r2
	ldr r4, [r0, #0x48]
	bne _080022DC
	ldrb r1, [r4, #4]
	ldrb r2, [r4, #5]
	orrs r3, r3
	bne _080022CE
	rsbs r2, r2, #0
_080022CE:
	bl sub_08002300
	beq _080022F4
	rsbs r1, r1, #0
	bl sub_08002300
	b _080022F4
_080022DC:
	ldrb r1, [r4, #2]
	ldrb r2, [r4, #3]
	movs r4, #0x10
	tst r3, r4
	beq _080022E8
	rsbs r1, r1, #0
_080022E8:
	bl sub_08002300
	beq _080022F4
	rsbs r2, r2, #0
	bl sub_08002300
_080022F4:
	push {r0}
	bl sub_080017FC
	pop {r0}
	pop {r4, pc}
	.align 2, 0

